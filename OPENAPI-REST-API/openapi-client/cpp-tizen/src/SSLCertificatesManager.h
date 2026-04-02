#ifndef _SSLCertificatesManager_H_
#define _SSLCertificatesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChargeInvoiceRows.h"
#include "GetAccountInfo_401_response.h"
#include "ServiceOrderPostResponse.h"
#include "SslCancel_200_response.h"
#include "SuccessTextResponse.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup SSLCertificates SSLCertificates
 * \ingroup Operations
 *  @{
 */
class SSLCertificatesManager {
public:
	SSLCertificatesManager();
	virtual ~SSLCertificatesManager();

/*! \brief Place SSL Cert Order. *Synchronous*
 *
 * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addSslSync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);

/*! \brief Place SSL Cert Order. *Asynchronous*
 *
 * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addSslAsync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);


/*! \brief SSL Cert Ordering Information. *Synchronous*
 *
 * Retrieves available SSL certificate types and pricing for ordering.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewSslSync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief SSL Cert Ordering Information. *Asynchronous*
 *
 * Retrieves available SSL certificate types and pricing for ordering.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewSslAsync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get SSL Cert Info. *Synchronous*
 *
 * Returns detailed information about a specific SSL certificate including its domain and expiration.
 * \param id SSL certificate ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSslInfoSync(char * accessToken,
	int id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get SSL Cert Info. *Asynchronous*
 *
 * Returns detailed information about a specific SSL certificate including its domain and expiration.
 * \param id SSL certificate ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSslInfoAsync(char * accessToken,
	int id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get SSL Cert Invoices. *Synchronous*
 *
 * Returns the billing invoices associated with this SSL certificate.
 * \param id SSL Cert ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSslInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get SSL Cert Invoices. *Asynchronous*
 *
 * Returns the billing invoices associated with this SSL certificate.
 * \param id SSL Cert ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSslInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief List SSL Certs. *Synchronous*
 *
 * Returns all SSL certificate services on the account with their current status.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSslListSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief List SSL Certs. *Asynchronous*
 *
 * Returns all SSL certificate services on the account with their current status.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSslListAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Resend SSL Welcome Email. *Synchronous*
 *
 * Resends the welcome email for the order.
 * \param id SSL Cert ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSslWelcomeEmailSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Resend SSL Welcome Email. *Asynchronous*
 *
 * Resends the welcome email for the order.
 * \param id SSL Cert ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSslWelcomeEmailAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Validate SSL Cert Order. *Synchronous*
 *
 * Validates an SSL certificate order before placing it.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putSslSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Validate SSL Cert Order. *Asynchronous*
 *
 * Validates an SSL certificate order before placing it.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putSslAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Cancel SSL Certificate Service. *Synchronous*
 *
 * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
 * \param id SSL Cert ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sslCancelSync(char * accessToken,
	int id, 
	void(* handler)(SslCancel_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel SSL Certificate Service. *Asynchronous*
 *
 * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
 * \param id SSL Cert ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sslCancelAsync(char * accessToken,
	int id, 
	void(* handler)(SslCancel_200_response, Error, void* )
	, void* userData);


/*! \brief Update SSL Cert Order. *Synchronous*
 *
 * Updates settings on an SSL certificate order.
 * \param id SSL certificate ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateSslInfoSync(char * accessToken,
	std::string id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update SSL Cert Order. *Asynchronous*
 *
 * Updates settings on an SSL certificate order.
 * \param id SSL certificate ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateSslInfoAsync(char * accessToken,
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
#endif /* SSLCertificatesManager_H_ */
