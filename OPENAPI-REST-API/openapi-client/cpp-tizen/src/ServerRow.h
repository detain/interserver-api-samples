/*
 * ServerRow.h
 *
 * A result row from the &#x60;Servers&#x60; &#x60;GET&#x60; request.
 */

#ifndef _ServerRow_H_
#define _ServerRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A result row from the `Servers` `GET` request.
 *
 *  \ingroup Models
 *
 */

class ServerRow : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerRow();
	ServerRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the server.
	 */
	std::string getServerId();

	/*! \brief Set The id of the server.
	 */
	void setServerId(std::string  server_id);
	/*! \brief Get The account lid of the server.
	 */
	std::string getAccountLid();

	/*! \brief Set The account lid of the server.
	 */
	void setAccountLid(std::string  account_lid);
	/*! \brief Get The hostname of the server.
	 */
	std::string getServerHostname();

	/*! \brief Set The hostname of the server.
	 */
	void setServerHostname(std::string  server_hostname);
	/*! \brief Get The status of the server.
	 */
	std::string getServerStatus();

	/*! \brief Set The status of the server.
	 */
	void setServerStatus(std::string  server_status);

private:
	std::string server_id;
	std::string account_lid;
	std::string server_hostname;
	std::string server_status;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerRow_H_ */
