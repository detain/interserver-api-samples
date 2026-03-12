
/*
 * PlaceBuyNowServer_request.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PlaceBuyNowServer_request_H_
#define TINY_CPP_CLIENT_PlaceBuyNowServer_request_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PlaceBuyNowServer_request{
public:

    /*! \brief Constructor.
	 */
    PlaceBuyNowServer_request();
    PlaceBuyNowServer_request(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PlaceBuyNowServer_request();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
	 */
	long getServerId();

	/*! \brief Set The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
	 */
	void setServerId(long server_id);
	/*! \brief Get The fully-qualified hostname to assign to the server.
	 */
	std::string getServerHostname();

	/*! \brief Set The fully-qualified hostname to assign to the server.
	 */
	void setServerHostname(std::string server_hostname);
	/*! \brief Get The root or administrator password to set on the server.
	 */
	std::string getServerRootPassword();

	/*! \brief Set The root or administrator password to set on the server.
	 */
	void setServerRootPassword(std::string server_root_password);


    private:
    long server_id{};
    std::string server_hostname{};
    std::string server_root_password{};
};
}

#endif /* TINY_CPP_CLIENT_PlaceBuyNowServer_request_H_ */
