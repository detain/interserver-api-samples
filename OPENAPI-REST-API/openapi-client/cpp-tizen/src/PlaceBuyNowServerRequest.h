/*
 * PlaceBuyNowServer_request.h
 *
 * 
 */

#ifndef _PlaceBuyNowServer_request_H_
#define _PlaceBuyNowServer_request_H_


#include <string>
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

class PlaceBuyNowServer_request : public Object {
public:
	/*! \brief Constructor.
	 */
	PlaceBuyNowServer_request();
	PlaceBuyNowServer_request(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PlaceBuyNowServer_request();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
	 */
	long long getServerId();

	/*! \brief Set The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
	 */
	void setServerId(long long  server_id);
	/*! \brief Get The fully-qualified hostname to assign to the server.
	 */
	std::string getServerHostname();

	/*! \brief Set The fully-qualified hostname to assign to the server.
	 */
	void setServerHostname(std::string  server_hostname);
	/*! \brief Get The root or administrator password to set on the server.
	 */
	std::string getServerRootPassword();

	/*! \brief Set The root or administrator password to set on the server.
	 */
	void setServerRootPassword(std::string  server_root_password);

private:
	long long server_id;
	std::string server_hostname;
	std::string server_root_password;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PlaceBuyNowServer_request_H_ */
