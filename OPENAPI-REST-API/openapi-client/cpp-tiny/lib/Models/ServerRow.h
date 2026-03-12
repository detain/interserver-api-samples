
/*
 * ServerRow.h
 *
 * A result row from the &#x60;Servers&#x60; &#x60;GET&#x60; request.
 */

#ifndef TINY_CPP_CLIENT_ServerRow_H_
#define TINY_CPP_CLIENT_ServerRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A result row from the `Servers` `GET` request.
 *
 *  \ingroup Models
 *
 */

class ServerRow{
public:

    /*! \brief Constructor.
	 */
    ServerRow();
    ServerRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the server.
	 */
	std::string getServerId();

	/*! \brief Set The id of the server.
	 */
	void setServerId(std::string server_id);
	/*! \brief Get The account lid of the server.
	 */
	std::string getAccountLid();

	/*! \brief Set The account lid of the server.
	 */
	void setAccountLid(std::string account_lid);
	/*! \brief Get The hostname of the server.
	 */
	std::string getServerHostname();

	/*! \brief Set The hostname of the server.
	 */
	void setServerHostname(std::string server_hostname);
	/*! \brief Get The status of the server.
	 */
	std::string getServerStatus();

	/*! \brief Set The status of the server.
	 */
	void setServerStatus(std::string server_status);


    private:
    std::string server_id{};
    std::string account_lid{};
    std::string server_hostname{};
    std::string server_status{};
};
}

#endif /* TINY_CPP_CLIENT_ServerRow_H_ */
